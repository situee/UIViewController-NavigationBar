//
//  UIViewController+NavigationBar.h
//
//  Created by Yuzhen Situ on 11/8/2014.
//  Copyright (c) 2014 GZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (NavigationBar)

/*!
 
 To set the back button title of the current ViewController, we create a backBarButtonItem
 for the previsou ViewController;
 
 @discussion
 Reference : Updating the Navigation Bar
 
 For all but the root view controller on the navigation stack, the item on the left side of the navigation bar provides navigation back to the previous view controller. The contents of this left-most button are determined as follows:
 
 - If the new top-level view controller has a custom left bar button item, that item is displayed. To specify a custom left bar button item, set the leftBarButtonItem property of the view controller’s navigation item.
 - If the top-level view controller does not have a custom left bar button item, but the navigation item of the previous view controller has an object in its backBarButtonItem property, the navigation bar displays that item.
 - If a custom bar button item is not specified by either of the view controllers, a default back button is used and its title is set to the value of the title property of the previous view controller—that is, the view controller one level down on the stack. (If there is only one view controller on the navigation stack, no back button is displayed.)
 
 @param backButtonTitle the back button title you want to set
 @see https://developer.apple.com/library/ios/documentation/uikit/reference/UINavigationController_Class/Reference/Reference.html#//apple_ref/doc/uid/TP40006934-CH3-SW25

 @author Yuzhen Situ
 @date 2014-08-20
 
 */
-(void)setBackButtonTitle:(NSString*)backButtonTitle;

/*!
 
 set Image as the NavigationItem titleView; if image height > 44, resize it.
 
 @discussion
 @b UINavigationItem.titleView is A custom view displayed in the center of the navigation bar when the receiver is the top item.
 
 
 If this property value is nil, the navigation item’s title is displayed in the center of the navigation bar when the receiver is the top item. If you set this property to a custom title, it is displayed instead of the title. This property is ignored if leftBarButtonItem is not nil.
 
 
 Custom views can contain buttons. Use the buttonWithType: method in UIButton class to add buttons to your custom view in the style of the navigation bar. Custom title views are centered on the navigation bar and may be resized to fit.
 
 @author Yuzhen Situ
 @date 2014-08-19
 
 */
-(void)setTitleViewWithImage:(UIImage*)image;

@end
