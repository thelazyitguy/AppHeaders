//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASNativeComponent-Protocol.h>
#import <Funny/VASViewComponent-Protocol.h>

@class UIView, VASErrorInfo;

@protocol VASNativeViewComponent <VASNativeComponent, VASViewComponent>
- (VASErrorInfo *)prepareView:(UIView *)arg1;
- (_Bool)isDescendantOfView:(UIView *)arg1;
@end
