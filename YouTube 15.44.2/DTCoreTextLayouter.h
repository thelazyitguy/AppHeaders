//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSCache, NSMutableArray;

@interface DTCoreTextLayouter : NSObject
{
    struct __CTFramesetter *_framesetter;
    NSAttributedString *_attributedString;
    _Bool _shouldCacheLayoutFrames;
    NSCache *_layoutFrameCache;
    NSMutableArray *_frames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool shouldCacheLayoutFrames; // @synthesize shouldCacheLayoutFrames=_shouldCacheLayoutFrames;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
- (void)_discardFramesetter;
- (id)layoutFrameWithRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;

@end

