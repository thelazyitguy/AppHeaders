//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageEventBuilder-Protocol.h>

@interface TFNDirectMessageConversationMetadataUpdateEventBuilder : NSObject <TFNDirectMessageEventBuilder>
{
    _Bool _filterNSFW;
}

@property(readonly, nonatomic) _Bool filterNSFW; // @synthesize filterNSFW=_filterNSFW;
- (id)eventWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init:(_Bool)arg1;

@end
