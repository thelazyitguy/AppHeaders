//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IBGUserStepsRecognizer : NSObject
{
    _Bool _isLastTouchOnKeyboard;
    NSMutableArray *_eventGestures;
    NSMutableArray *_recognizedEventGestures;
}

@property(retain, nonatomic) NSMutableArray *recognizedEventGestures; // @synthesize recognizedEventGestures=_recognizedEventGestures;
@property(retain, nonatomic) NSMutableArray *eventGestures; // @synthesize eventGestures=_eventGestures;
@property(nonatomic) _Bool isLastTouchOnKeyboard; // @synthesize isLastTouchOnKeyboard=_isLastTouchOnKeyboard;
- (void).cxx_destruct;
- (_Bool)isGestureViewKeyboard:(id)arg1;
- (id)getRecognizedEventGestureWithType:(long long)arg1;
- (id)getHighestOcurrencesGesture;
- (void)setNumberOfOcurrences:(id)arg1;
- (void)filterGestures;
- (id)getGestureWithTouchedView:(id)arg1 tapCount:(unsigned long long)arg2;
- (id)getGesture;
- (void)appendGestures:(id)arg1;
- (void)startGestureRecognizer;

@end

