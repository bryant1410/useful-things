//
//  CustomLayer.h
//  Hello World
//
//  Created by Erica Sadun on 5/19/14.
//  Copyright (c) 2014 Erica Sadun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^ImplicitCompletionBlock)(NSString *key, BOOL finished);

@interface CustomLayer : CALayer
@property (nonatomic, assign) CGFloat animationDuration;
@property (nonatomic, strong) ImplicitCompletionBlock completionBlock;
@end
