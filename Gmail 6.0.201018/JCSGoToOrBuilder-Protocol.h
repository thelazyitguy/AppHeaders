//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCSGoTo_Source, JCSGoTo_Type, JCSOptimization, NSString;
@protocol JavaUtilList;

@protocol JCSGoToOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSGoTo_Source *)getSourcesWithInt:(int)arg1;
- (id <JavaUtilList>)getSourcesList;
- (int)getSourcesCount;
- (JCSOptimization *)getOptimization;
- (_Bool)hasOptimization;
- (_Bool)getIsClicked;
- (_Bool)hasIsClicked;
- (NSString *)getText;
- (_Bool)hasText;
- (NSString *)getUri;
- (_Bool)hasUri;
- (JCSGoTo_Type *)getType;
- (_Bool)hasType;
@end

