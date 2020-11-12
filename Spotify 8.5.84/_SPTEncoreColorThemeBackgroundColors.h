//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreColorThemeBackgroundColors-Protocol.h"

@protocol SPTEncoreColorThemeColor, SPTEncoreColorThemeColorState;

@interface _SPTEncoreColorThemeBackgroundColors : NSObject <SPTEncoreColorThemeBackgroundColors>
{
    id <SPTEncoreColorThemeColor> _base;
    id <SPTEncoreColorThemeColor> _press;
    id <SPTEncoreColorThemeColor> _highlight;
    id <SPTEncoreColorThemeColorState> _elevated;
    id <SPTEncoreColorThemeColorState> _tinted;
    id <SPTEncoreColorThemeColorState> _unsafeForSmallText;
}

+ (id)backgroundColorsWithBase:(id)arg1 highlight:(id)arg2 press:(id)arg3 elevated:(id)arg4 tinted:(id)arg5 unsafeForSmallText:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColorState> unsafeForSmallText; // @synthesize unsafeForSmallText=_unsafeForSmallText;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColorState> tinted; // @synthesize tinted=_tinted;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColorState> elevated; // @synthesize elevated=_elevated;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColor> highlight; // @synthesize highlight=_highlight;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColor> press; // @synthesize press=_press;
@property(readonly, nonatomic) id <SPTEncoreColorThemeColor> base; // @synthesize base=_base;
- (id)initWithBase:(id)arg1 highlight:(id)arg2 press:(id)arg3 elevated:(id)arg4 tinted:(id)arg5 unsafeForSmallText:(id)arg6;

@end
