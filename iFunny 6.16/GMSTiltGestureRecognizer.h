//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSMultiTouchGestureRecognizer.h>

@interface GMSTiltGestureRecognizer : GMSMultiTouchGestureRecognizer
{
    // Error parsing type: [2{Vector2f="vector_"}], name: _startPoints
    // Error parsing type: [2{Vector2f="vector_"}], name: _currentPoints
    double _tiltAmount;
}

@property(readonly, nonatomic) double tiltAmount; // @synthesize tiltAmount=_tiltAmount;
- (id).cxx_construct;
- (void)didMove;
- (void)touchUp:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

