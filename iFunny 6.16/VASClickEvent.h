//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASAdSessionEvent.h>

@class NSDate;

@interface VASClickEvent : VASAdSessionEvent
{
    NSDate *_clickTime;
}

- (void).cxx_destruct;
@property(readonly) NSDate *clickTime; // @synthesize clickTime=_clickTime;
- (id)description;
- (id)initWithAdSession:(id)arg1;

@end
