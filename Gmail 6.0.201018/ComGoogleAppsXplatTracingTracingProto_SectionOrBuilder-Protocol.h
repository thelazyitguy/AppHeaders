//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsXplatTracingTracingProto_Attribute, ComGoogleAppsXplatTracingTracingProto_Level, ComGoogleAppsXplatTracingTracingProto_Section_Type, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsXplatTracingTracingProto_SectionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getOutLinkedIdsWithInt:(int)arg1;
- (id <JavaUtilList>)getOutLinkedIdsList;
- (int)getOutLinkedIdsCount;
- (int)getInLinkedIdsWithInt:(int)arg1;
- (id <JavaUtilList>)getInLinkedIdsList;
- (int)getInLinkedIdsCount;
- (int)getChildIdsWithInt:(int)arg1;
- (id <JavaUtilList>)getChildIdsList;
- (int)getChildIdsCount;
- (int)getParentId;
- (_Bool)hasParentId;
- (int)getStopThreadId;
- (_Bool)hasStopThreadId;
- (int)getStartThreadId;
- (_Bool)hasStartThreadId;
- (double)getStopTimestamp;
- (_Bool)hasStopTimestamp;
- (double)getStartTimestamp;
- (_Bool)hasStartTimestamp;
- (ComGoogleAppsXplatTracingTracingProto_Attribute *)getAttributesWithInt:(int)arg1;
- (id <JavaUtilList>)getAttributesList;
- (int)getAttributesCount;
- (NSString *)getSectionKey;
- (_Bool)hasSectionKey;
- (ComGoogleAppsXplatTracingTracingProto_Level *)getLevel;
- (_Bool)hasLevel;
- (int)getId;
- (_Bool)hasId;
- (ComGoogleAppsXplatTracingTracingProto_Section_Type *)getType;
- (_Bool)hasType;
@end
