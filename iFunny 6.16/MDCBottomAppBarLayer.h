//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface MDCBottomAppBarLayer : CAShapeLayer
{
}

+ (id)layer;
- (id)drawWithPlainPath:(id)arg1 yOffset:(double)arg2 width:(double)arg3 height:(double)arg4 arcCenter1:(struct CGPoint)arg5 arcCenter2:(struct CGPoint)arg6 arcRadius:(double)arg7;
- (id)drawWithPathToCut:(id)arg1 yOffset:(double)arg2 width:(double)arg3 height:(double)arg4 arcRadius:(double)arg5 arcCenter1:(struct CGPoint)arg6 arcCenter2:(struct CGPoint)arg7;
- (struct CGPath *)pathFromRect:(struct CGRect)arg1 floatingButton:(id)arg2 navigationBarFrame:(struct CGRect)arg3 shouldCut:(_Bool)arg4;

@end

