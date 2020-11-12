//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTextKitContext, ASTextKitFontSizeAdjuster, ASTextKitShadower;
@protocol ASTextKitTruncating;

@interface ASTextKitRenderer : NSObject
{
    struct CGSize _calculatedSize;
    ASTextKitContext *_context;
    ASTextKitShadower *_shadower;
    id <ASTextKitTruncating> _truncater;
    ASTextKitFontSizeAdjuster *_fontSizeAdjuster;
    double _currentScaleFactor;
    struct CGSize _constrainedSize;
    struct ASTextKitAttributes _attributes;
}

@property(readonly, nonatomic) double currentScaleFactor; // @synthesize currentScaleFactor=_currentScaleFactor;
@property(readonly, nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, nonatomic) ASTextKitFontSizeAdjuster *fontSizeAdjuster; // @synthesize fontSizeAdjuster=_fontSizeAdjuster;
@property(readonly, nonatomic) id <ASTextKitTruncating> truncater; // @synthesize truncater=_truncater;
@property(readonly, nonatomic) ASTextKitShadower *shadower; // @synthesize shadower=_shadower;
@property(readonly, nonatomic) ASTextKitContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) struct ASTextKitAttributes attributes; // @synthesize attributes=_attributes;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) vector_b5e32e34 visibleRanges;
- (_Bool)isTruncated;
- (unsigned long long)lineCount;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (_Bool)canUseFastPath;
- (_Bool)usesExclusionPaths;
- (_Bool)usesCustomTruncation;
- (_Bool)isScaled;
- (void)_calculateSize;
- (struct CGSize)size;
- (id)stringDrawingContext;
- (id)initWithTextKitAttributes:(const struct ASTextKitAttributes *)arg1 constrainedSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct _NSRange firstVisibleRange;
- (id)textCheckingResultAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint)arg1;
- (id)unlockedRectsForTextRange:(struct _NSRange)arg1 measureOptions:(unsigned long long)arg2 layoutManager:(id)arg3 textStorage:(id)arg4 textContainer:(id)arg5;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;

@end
