//
//  DetailViewController.h
//  UIViewController+NavigationBar
//
//  Created by situ on 5/2/2015.
//  Copyright (c) 2015 situee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

