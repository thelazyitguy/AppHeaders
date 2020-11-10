//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEEntityRowStyle, HUGSCustomViewControl;
@protocol GLUETheme, HUBComponentEventHandler, HUGSStyleOverrider;

@interface SPTFreeTierUILargeEntityRowComponentView : HUBComponentView <HUBComponentViewWithEvents, HUBComponentViewWithImageHandling>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    HUGSCustomViewControl *_rowViewControl;
    id <HUGSStyleOverrider> _styleOverrider;
    GLUEEntityRowStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GLUEEntityRowStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
@property(readonly, nonatomic) HUGSCustomViewControl *rowViewControl; // @synthesize rowViewControl=_rowViewControl;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)didPress;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureLabelForStyle:(id)arg1 forState:(unsigned long long)arg2;
- (id)styleForModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (struct CGSize)imageSize;
- (void)setupConstraints;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;

@end

