//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMEvent.h>

@class NSError;

@interface HAMNonFatalErrorEvent : HAMEvent
{
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithPlayer:(id)arg1;
- (id)initWithPlayer:(id)arg1 error:(id)arg2;

@end

