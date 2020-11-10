//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNAttributedTextView.h>

@class CALayer, TFNTiledTextLayer;

@interface TFNTilingTextView : TFNAttributedTextView
{
    CALayer *_highlightLayer;
    TFNTiledTextLayer *_tiledLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTiledTextLayer *tiledLayer; // @synthesize tiledLayer=_tiledLayer;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
- (void)_updateTiledLayerVisibility;
- (void)_updateHighlightVisibility;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelectionPaddingEnabled:(_Bool)arg1;
- (void)setSelectionColor:(id)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)setTextModel:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
