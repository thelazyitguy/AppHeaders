//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Branch/BNCServerRequest.h>

#import <Branch/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface BranchEventRequest : BNCServerRequest <NSSecureCoding>
{
    NSDictionary *_eventDictionary;
    NSURL *_serverURL;
    CDUnknownBlockType _completion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain) NSDictionary *eventDictionary; // @synthesize eventDictionary=_eventDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)processResponse:(id)arg1 error:(id)arg2;
- (void)makeRequest:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithServerURL:(id)arg1 eventDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

