//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNAnimatableImageView.h>

@interface T1SpriteAnimationImageView : TFNAnimatableImageView
{
    CDUnknownBlockType _hitTestBlock;
    CDUnknownBlockType _touchesEndedBlock;
    long long _hitCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long hitCount; // @synthesize hitCount=_hitCount;
@property(copy, nonatomic) CDUnknownBlockType touchesEndedBlock; // @synthesize touchesEndedBlock=_touchesEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType hitTestBlock; // @synthesize hitTestBlock=_hitTestBlock;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

