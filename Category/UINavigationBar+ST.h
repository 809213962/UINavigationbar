//
//  UINavigationBar+ST.h
//  STNavigationBar
//
//  Created by lin on 16/10/3.
//  Copyright © 2016年 林理刚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (ST)
- (void)st_setBackgroundColor:(UIColor *)backgroundColor;
- (void)st_setElementsAlpha:(CGFloat)alpha;
- (void)st_setTranslationY:(CGFloat)translationY;
- (void)st_reset;
@end
