//
//  UIViewController+NavigationBar.m
//
//  Created by Yuzhen Situ on 11/8/2014.
//  Copyright (c) 2014 GZ. All rights reserved.
//

#import "UIViewController+NavigationBar.h"

@implementation UIViewController (NavigationBar)

-(void)setBackButtonTitle:(NSString*)backButtonTitle
{
    UINavigationController *nav = self.navigationController;
    if (nav != nil) {
        NSArray *viewControllerArray = [self.navigationController viewControllers];
        // get index of current ViewController
        long myIndex = [viewControllerArray indexOfObject:self];
        // get index of the previous ViewContoller
        long previousViewControllerIndex = myIndex - 1;
        if (previousViewControllerIndex >= 0) {
            UIViewController *previous = [viewControllerArray objectAtIndex:previousViewControllerIndex];
            previous.navigationItem.backBarButtonItem = [[UIBarButtonItem alloc]
                                                         initWithTitle:backButtonTitle
                                                         style:UIBarButtonItemStylePlain
                                                         target:self
                                                         action:nil];
        }
    }
}

-(void)setTitleViewWithImage:(UIImage*)image
{
    UIImageView *imageView = [[UIImageView alloc]initWithImage:image];
    imageView.contentMode = UIViewContentModeScaleAspectFit;
    CGRect frame = imageView.frame;
    if (imageView.frame.size.height > 44.0) {
        // If image height > 44, we need to resize the image.
        frame.size.width = frame.size.width * 44.0 / frame.size.height;
        frame.size.height = 44.0;
        imageView.frame = frame;
    }
    // If image height > 44, we need to resize the image.
    // in order to center-horizontal, the image has to be wrapped by a UIView.
    // otherwise the imageView width is reset to the image original width.
    UIView *view = [[UIView alloc]initWithFrame:frame];
    [view addSubview:imageView];
    [self.navigationItem setTitleView:view];
}

@end
