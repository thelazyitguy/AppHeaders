//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALXRecognizeEventInitiatorPayload.h"

@class ALXWakewordIndicesPayload, NSString;

@interface ALXWakewordRecognizeEventInitiatorPayload : ALXRecognizeEventInitiatorPayload
{
    NSString *_wakeWord;
    ALXWakewordIndicesPayload *_wakeWordIndices;
}

@property(retain, nonatomic) ALXWakewordIndicesPayload *wakeWordIndices; // @synthesize wakeWordIndices=_wakeWordIndices;
@property(copy, nonatomic) NSString *wakeWord; // @synthesize wakeWord=_wakeWord;
- (void).cxx_destruct;
- (id)initWithWakeword:(id)arg1 withWakewordIndices:(id)arg2;

@end
