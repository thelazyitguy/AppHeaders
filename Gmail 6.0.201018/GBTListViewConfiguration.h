//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise, ListNavigationIdentifier;
@protocol GBTClient;

@interface GBTListViewConfiguration : NSObject
{
    _Bool _deferLoading;
    id <GBTClient> _client;
    ListNavigationIdentifier *_identifier;
    GPCPromise *_unifiedInbox;
}

+ (id)listViewConfigurationWithClient:(id)arg1 identifier:(id)arg2 deferLoading:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) GPCPromise *unifiedInbox; // @synthesize unifiedInbox=_unifiedInbox;
@property(readonly, nonatomic) _Bool deferLoading; // @synthesize deferLoading=_deferLoading;
@property(readonly, nonatomic) ListNavigationIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <GBTClient> client; // @synthesize client=_client;
- (id)initWithClient:(id)arg1 identifier:(id)arg2 deferLoading:(_Bool)arg3 unifiedInbox:(id)arg4;

@end
