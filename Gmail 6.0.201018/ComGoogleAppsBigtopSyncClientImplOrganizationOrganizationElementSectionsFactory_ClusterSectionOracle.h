//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection_SectionOracle-Protocol.h"

@class JBTSection_Type, JBTSystemClusters, NSString;

@interface ComGoogleAppsBigtopSyncClientImplOrganizationOrganizationElementSectionsFactory_ClusterSectionOracle : NSObject <ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection_SectionOracle>
{
    JBTSection_Type *sectionTypeVisibility_;
    JBTSystemClusters *systemClusters_;
    _Bool vaultClusters_;
    _Bool includeInboxInSystemElementsSection_;
}

- (void)dealloc;
- (_Bool)isInSectionWithId:(id)arg1 withComGoogleAppsBigtopSyncClientImplCommonResultMetadata:(id)arg2 withComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
