//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTParticipantSet-Protocol.h"

@class NSString;
@protocol JavaUtilMap;

@interface ComGoogleAppsBigtopSyncClientImplContactsParticipantSetImpl : NSObject <JBTParticipantSet>
{
    id <JavaUtilMap> participantsByType_;
}

- (void)dealloc;
- (_Bool)isEmpty;
- (id)toBuilder;
- (int)getSize;
- (id)getAllParticipantsContactReferences;
- (id)getParticipantsOfTypeWithJBTParticipant_Type:(id)arg1;
- (id)getTypesToShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
