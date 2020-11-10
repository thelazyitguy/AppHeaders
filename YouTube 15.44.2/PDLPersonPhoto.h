//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/PDLPersonPhoto-Protocol.h>

@class NSString, PDLPersonFieldMetadata;

@interface PDLPersonPhoto : GPBMessage <PDLPersonPhoto>
{
}

+ (id)descriptor;
- (id)dataURIFromImage:(id)arg1;
- (id)addressBookPhotoDataUriForSize:(struct CGSize)arg1;
- (id)addressBookPhotoDataUri;
- (id)imageForDeviceContact;
@property(readonly, nonatomic) NSString *URLString;
@property(readonly, nonatomic) NSString *deviceContactID;
- (id)imageURLForSize:(struct CGSize)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceContactId; // @dynamic deviceContactId;
@property(nonatomic) _Bool hasDeviceContactId; // @dynamic hasDeviceContactId;
@property(nonatomic) _Bool hasIsDefault; // @dynamic hasIsDefault;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDefault; // @dynamic isDefault;
@property(retain, nonatomic) PDLPersonFieldMetadata *metadata; // @dynamic metadata;
@property(readonly) Class superclass;

@end

