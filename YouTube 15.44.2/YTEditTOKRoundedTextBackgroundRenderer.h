//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/TOKBasicTextBackgroundRenderer.h>

@interface YTEditTOKRoundedTextBackgroundRenderer : TOKBasicTextBackgroundRenderer
{
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)createLinkedRectangleFromList:(id)arg1 withRange:(struct _NSRange)arg2 context:(struct CGContext *)arg3;
- (void)drawRoundedCornerBackgroundRectangles:(id)arg1 fillColor:(id)arg2 context:(struct CGContext *)arg3;
- (_Bool)updateRectangleSizeForHighlightedRectangle:(id)arg1 forRectangleLocation:(int)arg2 toRectangleLocation:(int)arg3 cornerRadius:(double)arg4;
- (void)updatePreviousRectsForHighlightedRectangles:(id)arg1 withCurrentRectPosition:(int)arg2 minRadius:(double)arg3;
- (id)lineRectsWithCorrectedWidths:(id)arg1 withCornerRadius:(double)arg2;
- (void)renderInContext:(struct CGContext *)arg1 forLineFragmentRects:(id)arg2;

@end
