//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformFieldImageURL-Protocol.h"
#import "SPTCollectionPlatformFieldName-Protocol.h"
#import "SPTCollectionPlatformFieldURL-Protocol.h"

@class NSString, NSURL;

@interface SPTCollectionPlatformDataLoaderFieldsImplementation : NSObject <SPTCollectionPlatformFieldName, SPTCollectionPlatformFieldURL, SPTCollectionPlatformFieldImageURL>
{
    NSString *_name;
    NSURL *_URL;
    NSURL *_imageURL;
    unsigned long long _availableOfflineStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long availableOfflineStatus; // @synthesize availableOfflineStatus=_availableOfflineStatus;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
