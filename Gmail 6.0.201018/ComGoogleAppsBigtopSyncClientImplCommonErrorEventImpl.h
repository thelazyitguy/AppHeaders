//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplCommonEventImpl.h"

#import "JBTErrorEvent-Protocol.h"

@class NSString;
@protocol JBTError;

@interface ComGoogleAppsBigtopSyncClientImplCommonErrorEventImpl : ComGoogleAppsBigtopSyncClientImplCommonEventImpl <JBTErrorEvent>
{
    id <JBTError> error_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
