//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntityResolver-Protocol.h"

@class NSString;
@protocol SPTConcertsEntityResolverDelegate;

@interface SPTConcertsLocalEntityResolver : NSObject <SPTConcertsEntityResolver>
{
    id <SPTConcertsEntityResolverDelegate> _delegate;
}

+ (id)albumWithURI:(id)arg1 albumName:(id)arg2 artistName:(id)arg3 albumImageURI:(id)arg4;
+ (id)artistWithName:(id)arg1 URI:(id)arg2 imageURL:(id)arg3 hasAffinity:(_Bool)arg4;
+ (id)createMockEntity;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTConcertsEntityResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)resolveConcertEntityForURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

