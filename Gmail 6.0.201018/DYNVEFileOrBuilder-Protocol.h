//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNVEFile_FileMetadataType, NSString;

@protocol DYNVEFileOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getQuickAccessSuggestion;
- (_Bool)hasQuickAccessSuggestion;
- (NSString *)getDriveResourceId;
- (_Bool)hasDriveResourceId;
- (DYNVEFile_FileMetadataType *)getFileMetadataType;
- (_Bool)hasFileMetadataType;
- (int)getTimeSinceLastModifiedInDays;
- (_Bool)hasTimeSinceLastModifiedInDays;
- (NSString *)getMimeType;
- (_Bool)hasMimeType;
@end

