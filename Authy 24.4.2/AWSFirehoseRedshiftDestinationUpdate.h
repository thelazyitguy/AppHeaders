//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSFirehoseReplicateCommand, AWSFirehoseS3DestinationUpdate, NSString;

@interface AWSFirehoseRedshiftDestinationUpdate : AWSModel
{
    NSString *_clusterJDBCURL;
    NSString *_password;
    AWSFirehoseReplicateCommand *_replicateCommand;
    NSString *_roleARN;
    AWSFirehoseS3DestinationUpdate *_s3Update;
    NSString *_username;
}

+ (id)s3UpdateJSONTransformer;
+ (id)replicateCommandJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) AWSFirehoseS3DestinationUpdate *s3Update; // @synthesize s3Update=_s3Update;
@property(retain, nonatomic) NSString *roleARN; // @synthesize roleARN=_roleARN;
@property(retain, nonatomic) AWSFirehoseReplicateCommand *replicateCommand; // @synthesize replicateCommand=_replicateCommand;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *clusterJDBCURL; // @synthesize clusterJDBCURL=_clusterJDBCURL;

@end
