//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCaribouSmartmailDetailedLayoutSectionData, ComGoogleCaribouSmartmailDetailedLayoutSection_WidgetType, ComGoogleCaribouSmartmailImageTitleDescription, JCSIcon;
@protocol JavaUtilList;

@protocol ComGoogleCaribouSmartmailDetailedLayoutSectionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCaribouSmartmailImageTitleDescription *)getImageTitleDescription;
- (_Bool)hasImageTitleDescription;
- (ComGoogleCaribouSmartmailDetailedLayoutSection_WidgetType *)getWidgetType;
- (_Bool)hasWidgetType;
- (ComGoogleCaribouSmartmailDetailedLayoutSectionData *)getSectionDataWithInt:(int)arg1;
- (id <JavaUtilList>)getSectionDataList;
- (int)getSectionDataCount;
- (JCSIcon *)getIcon;
- (_Bool)hasIcon;
@end

