//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTClusterFilter_Builder-Protocol.h"

@class JavaUtilArrayList, NSString;

@interface ComGoogleAppsBigtopSyncClientImplClustersFactoryClusterFilterImpl_Builder : NSObject <JBTClusterFilter_Builder>
{
    JavaUtilArrayList *predicates_;
    _Bool deleteMessage_;
    NSString *id__;
}

- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)newPredicateBuilder;
- (id)setPredicatesWithJavaUtilList:(id)arg1;
- (id)getPredicates;
- (id)setDeleteMessageWithBoolean:(_Bool)arg1;
- (_Bool)getDeleteMessage;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
