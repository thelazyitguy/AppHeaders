//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMEvent.h>

@interface HAMCurrentTimeChangedEvent : HAMEvent
{
    CDStruct_576a8307 _currentTime;
}

@property(readonly, nonatomic) CDStruct_576a8307 currentTime; // @synthesize currentTime=_currentTime;
- (id)initWithPlayer:(id)arg1;
- (id)initWithPlayer:(id)arg1 currentTime:(CDStruct_576a8307)arg2;

@end

