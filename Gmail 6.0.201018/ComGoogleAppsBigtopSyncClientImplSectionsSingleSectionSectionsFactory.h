//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSectionsApiSectionsFactory-Protocol.h"

@class JBTSection_Type, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, JavaUtilComparator;

@interface ComGoogleAppsBigtopSyncClientImplSectionsSingleSectionSectionsFactory : NSObject <ComGoogleAppsBigtopSyncClientImplSectionsApiSectionsFactory>
{
    id <JavaUtilComparator> comparator_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    JBTSection_Type *sectionType_;
    _Bool shouldRenderHeader_;
}

- (void)dealloc;
- (id)createSectionsWithComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager:(id)arg1 withLong:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
