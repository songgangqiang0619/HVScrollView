//
//  BaseViewController.h
//  HVScrollView
//
//  Created by Libo on 17/6/14.
//  Copyright © 2017年 iDress. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyHeaderView.h"

@interface BaseViewController : UIViewController
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) MyHeaderView *headerView;
@property (nonatomic, assign) CGPoint lastContentOffset;

@property (nonatomic, assign) BOOL isFirstViewLoaded;

@end
