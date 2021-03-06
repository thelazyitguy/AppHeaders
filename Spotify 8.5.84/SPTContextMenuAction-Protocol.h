//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEImageStyle, NSString, NSURL, UIColor, UIImage, UIView;

@protocol SPTContextMenuAction <NSObject>
- (id)performAction;
- (NSString *)title;

@optional
- (void)logUBIInteraction;
- (NSString *)logEventName;
- (NSString *)accessibilityHint;
- (UIView *)accessoryView;
- (_Bool)shouldHaveTwoLineSubtitle;
- (_Bool)shouldHaveTwoLineTitle;
- (NSString *)subtitle;
- (GLUEImageStyle *)imageStyle;
- (UIImage *)placeholderImage;
- (NSURL *)imageURL;
- (UIImage *)iconImage;
- (UIColor *)iconColor;
- (long long)icon;
- (_Bool)isSelected;
- (_Bool)isDisabled;
@end

