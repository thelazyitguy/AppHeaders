//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreTypeStyleBuilder-Protocol.h"

@class UIFont;

@interface SPTEncoreTypeStyleBuilder : NSObject <SPTEncoreTypeStyleBuilder>
{
    _Bool _upperCaseLayout;
    UIFont *_font;
    CDStruct_63798c11 _fontSizeRange;
    CDStruct_63798c11 _trackingRange;
    CDStruct_63798c11 _lineHeightRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool upperCaseLayout; // @synthesize upperCaseLayout=_upperCaseLayout;
@property(nonatomic) CDStruct_d2b197d1 lineHeightRange; // @synthesize lineHeightRange=_lineHeightRange;
@property(nonatomic) CDStruct_d2b197d1 trackingRange; // @synthesize trackingRange=_trackingRange;
@property(nonatomic) CDStruct_d2b197d1 fontSizeRange; // @synthesize fontSizeRange=_fontSizeRange;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)withUpperCaseLayout:(_Bool)arg1;
- (id)withLineHeight:(double)arg1;
- (id)withLineHeightRange:(CDStruct_d2b197d1)arg1;
- (id)withTracking:(double)arg1;
- (id)withTrackingRange:(CDStruct_d2b197d1)arg1;
- (id)withFontSize:(double)arg1;
- (id)withFontSizeRange:(CDStruct_d2b197d1)arg1;
- (id)build;
- (id)initWithFont:(id)arg1;
- (id)initWithBaseStyle:(id)arg1;

@end

