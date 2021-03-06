//
//  LiuqsTranisition.h
//  动画
//
//  Created by 刘全水 on 16/6/23.
//  Copyright © 2016年 刘全水. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LiuqsInvertTranisition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, copy)void(^PopFinish)(void);

@property (assign, nonatomic)CGPoint IconCenter;

@end
