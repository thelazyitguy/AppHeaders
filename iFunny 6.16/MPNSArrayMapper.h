//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/MPObjectMapper-Protocol.h>

@class NSString;
@protocol MPObjectMapper;

@interface MPNSArrayMapper : NSObject <MPObjectMapper>
{
    id <MPObjectMapper> _mapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MPObjectMapper> mapper; // @synthesize mapper=_mapper;
- (Class)requiredSourceObjectClass;
- (id)mappedObjectFromSourceObject:(id)arg1;
- (id)initWithInternalMapper:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
