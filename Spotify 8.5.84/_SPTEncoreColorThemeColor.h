//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreColorThemeColor-Protocol.h"

@class UIColor;

@interface _SPTEncoreColorThemeColor : NSObject <SPTEncoreColorThemeColor>
{
    _Bool _isFallback;
    UIColor *_uiColor;
}

+ (id)themeColorWithColor:(id)arg1 isFallback:(_Bool)arg2;
+ (id)themeColorWithColor:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFallback; // @synthesize isFallback=_isFallback;
@property(readonly, nonatomic) UIColor *uiColor; // @synthesize uiColor=_uiColor;
- (id)initWithColor:(id)arg1 isFallback:(_Bool)arg2;

@end
