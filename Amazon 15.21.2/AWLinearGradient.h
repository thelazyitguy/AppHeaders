//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWGradient.h"

@interface AWLinearGradient : AWGradient
{
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setDirection:(int)arg1 start:(double)arg2 end:(double)arg3;

@end

