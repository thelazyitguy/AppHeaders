//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsItemsInternalProto_StoredAd, JavaLangLong, NSString;

@interface ComGoogleAppsBigtopDataStorageSchemaAdEntry : NSObject
{
    JavaLangLong *rowId_;
    NSString *adServerId_;
    ComGoogleAppsBigtopDataItemsItemsInternalProto_StoredAd *storedAd_;
    NSString *rank_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getRank;
- (id)getStoredAd;
- (id)getAdServerId;
- (id)getRowId;

@end
