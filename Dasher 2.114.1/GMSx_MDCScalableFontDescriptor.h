//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFontDescriptor, UIFontMetrics;

@interface GMSx_MDCScalableFontDescriptor : NSObject
{
    UIFontDescriptor *_fontDescriptor;
    UIFontMetrics *_fontMetrics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIFontMetrics *fontMetrics; // @synthesize fontMetrics=_fontMetrics;
@property(readonly, nonatomic) UIFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
- (id)preferredFontCompatibleWithTraitCollection:(id)arg1;
- (id)baseFont;
- (id)initWithFontDescriptor:(id)arg1;
- (id)initWithFontDescriptor:(id)arg1 fontMetrics:(id)arg2;

@end
