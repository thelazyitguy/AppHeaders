//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GT3POWManager : NSObject
{
}

+ (id)archivedFilePath;
+ (id)unarchiveDictionaryFromFilePath;
+ (id)archivedScriptString;
+ (id)archivedVersion;
+ (void)archivedDataWithDictionary:(id)arg1;
+ (id)loadFromLocalJSFile;
+ (id)archiveDataWithConfigModel:(id)arg1;
+ (id)splicePOWSourceUrlWithServerDomain:(id)arg1 workerVersion:(id)arg2;
+ (id)calculatePowWithConfigModel:(id)arg1;

@end

