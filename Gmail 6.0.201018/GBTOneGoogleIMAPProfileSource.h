//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLProfileSource-Protocol.h"

@class NSString;

@interface GBTOneGoogleIMAPProfileSource : NSObject <OGLProfileSource>
{
}

- (id)imageForProfile:(id)arg1;
- (id)primaryProfileImageURLStringForProfile:(id)arg1;
- (id)primaryEmailForProfile:(id)arg1;
- (id)primaryFamilyNameForProfile:(id)arg1;
- (id)primaryGivenNameForProfile:(id)arg1;
- (id)primaryDisplayNameForProfile:(id)arg1;
- (id)defaultSizePlaceholderProfileImage;
- (id)defaultSizeProfileImageForAccount:(id)arg1;
- (id)disabledProfileImageForImage:(id)arg1;
- (void)setProfileUpdateDate:(id)arg1 forAccount:(id)arg2;
- (_Bool)isStaleProfile:(id)arg1;
- (void)removeProfileFileCache;
- (void)removeCachedDataForAccount:(id)arg1;
- (id)cachedProfileForAccount:(id)arg1;
- (id)cachedProfileImageForAccount:(id)arg1;
- (void)fetchProfileForAccount:(id)arg1 useCachedProfile:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
