//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class STKCoreButtonSettingsBuilder;

@interface STKCoreButton : UIView
{
    STKCoreButtonSettingsBuilder *_builder;
}

@property(retain, nonatomic) STKCoreButtonSettingsBuilder *builder; // @synthesize builder=_builder;
- (void).cxx_destruct;
- (void)drawShadowWithCurrentPath:(id)arg1;
- (void)drawRoundPath;
- (void)drawRect:(struct CGRect)arg1;
- (void)initializer;
- (void)awakeFromNib;
- (id)initWithBuilder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)settings;

@end
