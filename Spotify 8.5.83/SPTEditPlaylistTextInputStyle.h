//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTEditPlaylistTextInputStyle : NSObject <GLUEStyle>
{
    UIColor *_textColor;
    UIColor *_tintColor;
    UIColor *_underlineViewBackgroundColor;
    double _edgeMargin;
    double _underlineOffset;
    double _topMargin;
    double _bottomMargin;
    UIColor *_placeholderTextColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double underlineOffset; // @synthesize underlineOffset=_underlineOffset;
@property(nonatomic) double edgeMargin; // @synthesize edgeMargin=_edgeMargin;
@property(copy, nonatomic) UIColor *underlineViewBackgroundColor; // @synthesize underlineViewBackgroundColor=_underlineViewBackgroundColor;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

