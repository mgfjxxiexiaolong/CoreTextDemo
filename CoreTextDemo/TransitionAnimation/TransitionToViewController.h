//
//  TransitionToViewController.h
//  CoreTextDemo
//
//  Created by 谢小龙 on 16/7/4.
//  Copyright © 2016年 XXL. All rights reserved.
//

#import "BasicViewController.h"
#import "TransitionFromViewController.h"

@interface TransitionToViewController : BasicViewController

@property (nonatomic, strong) TransitionFromViewController *fromVC;

@end
