//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFileStore.h"

@class A9VSFezFileStoreMetadata, NSISO8601DateFormatter;

@interface A9VSFezRoomFileStore : A9VSFileStore
{
    A9VSFezFileStoreMetadata *_metadata;
    NSISO8601DateFormatter *_metadataDateFormatter;
}

+ (id)defaultStore;
@property(readonly, nonatomic) NSISO8601DateFormatter *metadataDateFormatter; // @synthesize metadataDateFormatter=_metadataDateFormatter;
@property(readonly, nonatomic) A9VSFezFileStoreMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)layoutDirectoryForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 layoutIdentifier:(id)arg3;
- (id)layoutsDirectoryForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (id)viewDirectoryForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3;
- (id)viewsDirectoryForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (id)roomDirectoryForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (id)roomsDirectoryForDirectedIdentifier:(id)arg1;
- (id)customerDirectoryForDirectedIdentifier:(id)arg1;
- (id)customersDirectory;
- (id)layoutDataFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 layoutIdentifier:(id)arg3;
- (id)viewThumbnailFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3;
- (id)viewImageFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3;
- (id)viewScienceDataFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3;
- (id)viewDataFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3;
- (id)roomScienceDataFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (id)roomDataFileForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (_Bool)deleteURL:(id)arg1;
- (_Bool)writeData:(id)arg1 updatedAt:(id)arg2 toFileAtPath:(id)arg3;
- (_Bool)writeViewThumbnailForViews:(id)arg1 inAssetData:(id)arg2 forDirectedIdentifier:(id)arg3;
- (_Bool)writeViewImageForViews:(id)arg1 inAssetData:(id)arg2 forDirectedIdentifier:(id)arg3;
- (_Bool)writeViewScienceDataForViews:(id)arg1 inAssetData:(id)arg2 forDirectedIdentifier:(id)arg3;
- (_Bool)writeViewDataForViews:(id)arg1 inAssetData:(id)arg2 forDirectedIdentifier:(id)arg3;
- (_Bool)writeLayoutDataForLayouts:(id)arg1 inAssetData:(id)arg2 forDirectedIdentifier:(id)arg3;
- (id)sortedItemsInDirectoryAtPath:(id)arg1;
- (id)itemsInDirectoryAtPath:(id)arg1;
- (id)readDataAtPath:(id)arg1 updatedAt:(id)arg2;
- (_Bool)isDataStaleAtFilePath:(id)arg1 updatedAt:(id)arg2;
- (_Bool)deleteRoomForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2;
- (_Bool)deleteRoomsForDirectedIdentifier:(id)arg1 ignoringRoomIdentifiers:(id)arg2;
- (_Bool)deleteRoomsIgnoringDirectedIdentifier:(id)arg1;
- (_Bool)deleteRooms;
- (_Bool)writeLayoutData:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4 layoutIdentifier:(id)arg5;
- (_Bool)writeViewThumbnail:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4 viewIdentifier:(id)arg5;
- (_Bool)writeViewImage:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4 viewIdentifier:(id)arg5;
- (_Bool)writeViewScienceData:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4 viewIdentifier:(id)arg5;
- (_Bool)writeViewData:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4 viewIdentifier:(id)arg5;
- (_Bool)writeRoomScienceData:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4;
- (_Bool)writeRoomData:(id)arg1 updatedAt:(id)arg2 forDirectedIdentifier:(id)arg3 roomIdentifier:(id)arg4;
- (_Bool)writeAssetData:(id)arg1 forRoom:(id)arg2 directedIdentifier:(id)arg3;
- (id)layoutDataForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 layoutIdentifier:(id)arg3 updatedAt:(id)arg4;
- (id)viewThumbnailForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3 withMaxSize:(struct CGSize)arg4 updatedAt:(id)arg5;
- (id)viewImageForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3 updatedAt:(id)arg4;
- (id)viewScienceDataForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3 updatedAt:(id)arg4;
- (id)viewDataForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 viewIdentifier:(id)arg3 updatedAt:(id)arg4;
- (id)roomScienceDataForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 updatedAt:(id)arg3;
- (id)roomDataForDirectedIdentifier:(id)arg1 roomIdentifier:(id)arg2 updatedAt:(id)arg3;
- (id)initWithAccessControlLevel:(long long)arg1 persistenceType:(long long)arg2 andSubpath:(id)arg3;

@end

