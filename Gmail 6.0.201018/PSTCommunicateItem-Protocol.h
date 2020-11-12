//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;
@protocol UITraitEnvironment;

@protocol PSTCommunicateItem <NSObject>
@property unsigned long long itemIndex;
@property unsigned long long typeItemCount;
@property _Bool sourceButtonVisible;
@property _Bool leftIconVisible;
- (CDStruct_a9c8ee48)visualElementTag;
- (NSString *)a11yLabel;
- (NSString *)subtitle;
- (NSString *)value;
- (NSString *)actionURL:(NSString *)arg1;
- (NSString *)title;
- (UIImage *)leftIconFor:(id <UITraitEnvironment>)arg1;

@optional
- (NSString *)source;
- (NSString *)a11yLabelForRightAction;
- (NSString *)rightActionURL:(NSString *)arg1;
- (UIImage *)rightIconFor:(id <UITraitEnvironment>)arg1;
@end
