//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFileIDResourceKeyPair, GDKFileQuery, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol GDKFile, SSOIdentity;

@interface GDKDefaultDataSourceParamsBuilder : NSObject
{
    _Bool _dynamicTypeEnabled;
    _Bool _vgn__supportedSortTypes_mutable_hazzer;
    NSMutableOrderedSet *_vgn__supportedSortTypes_mutable_31;
    NSString *_identifier;
    id <SSOIdentity> _userIdentity;
    GDKFileIDResourceKeyPair *_folderIDResourceKeyPair;
    NSString *_explicitTitle;
    id <GDKFile> _folder;
    GDKFileQuery *_fileQuery;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithIdentifier:(id)arg1 userIdentity:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool vgn__supportedSortTypes_mutable_hazzer; // @synthesize vgn__supportedSortTypes_mutable_hazzer=_vgn__supportedSortTypes_mutable_hazzer;
@property(retain, nonatomic) GDKFileQuery *fileQuery; // @synthesize fileQuery=_fileQuery;
@property(retain, nonatomic) id <GDKFile> folder; // @synthesize folder=_folder;
@property(copy, nonatomic) NSString *explicitTitle; // @synthesize explicitTitle=_explicitTitle;
@property(retain, nonatomic) GDKFileIDResourceKeyPair *folderIDResourceKeyPair; // @synthesize folderIDResourceKeyPair=_folderIDResourceKeyPair;
@property(nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(retain, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)build;
- (void)removeSupportedSortType:(id)arg1;
- (void)addSupportedSortType:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *supportedSortTypes;
@property(retain, nonatomic) NSMutableOrderedSet *vgn__supportedSortTypes_mutable; // @synthesize vgn__supportedSortTypes_mutable=_vgn__supportedSortTypes_mutable_31;

@end
