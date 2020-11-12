//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCaribouSmartmailFlightReservation_FlightSegment_FlightPassengerInfo, ComGoogleCaribouSmartmailFlightReservation_FlightSegment_StatusCode, JCSAssignedId, JCSImage, JCSTime, NSString;
@protocol JavaUtilList;

@protocol ComGoogleCaribouSmartmailFlightReservation_FlightSegmentOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getTicketToken;
- (_Bool)hasTicketToken;
- (ComGoogleCaribouSmartmailFlightReservation_FlightSegment_FlightPassengerInfo *)getPassengerInfoWithInt:(int)arg1;
- (id <JavaUtilList>)getPassengerInfoList;
- (int)getPassengerInfoCount;
- (JCSTime *)getLastUpdated;
- (_Bool)hasLastUpdated;
- (JCSImage *)getImage;
- (_Bool)hasImage;
- (NSString *)getFlightStatusMessage;
- (_Bool)hasFlightStatusMessage;
- (ComGoogleCaribouSmartmailFlightReservation_FlightSegment_StatusCode *)getStatusCode;
- (_Bool)hasStatusCode;
- (NSString *)getArrivalGate;
- (_Bool)hasArrivalGate;
- (NSString *)getDepartureGate;
- (_Bool)hasDepartureGate;
- (NSString *)getArrivalTerminal;
- (_Bool)hasArrivalTerminal;
- (NSString *)getDepartureTerminal;
- (_Bool)hasDepartureTerminal;
- (NSString *)getDivertedArrivalCity;
- (_Bool)hasDivertedArrivalCity;
- (NSString *)getDivertedArrivalAirportCode;
- (_Bool)hasDivertedArrivalAirportCode;
- (NSString *)getArrivalCity;
- (_Bool)hasArrivalCity;
- (NSString *)getArrivalAirportCode;
- (_Bool)hasArrivalAirportCode;
- (NSString *)getDepartureCity;
- (_Bool)hasDepartureCity;
- (NSString *)getDepartureAirportCode;
- (_Bool)hasDepartureAirportCode;
- (JCSTime *)getActualArrivalTime;
- (_Bool)hasActualArrivalTime;
- (JCSTime *)getArrivalTime;
- (_Bool)hasArrivalTime;
- (JCSTime *)getActualDepartureTime;
- (_Bool)hasActualDepartureTime;
- (JCSTime *)getDepartureTime;
- (_Bool)hasDepartureTime;
- (NSString *)getFlightNumber;
- (_Bool)hasFlightNumber;
- (NSString *)getAirlineCode;
- (_Bool)hasAirlineCode;
- (NSString *)getAirlineName;
- (_Bool)hasAirlineName;
- (NSString *)getBookingReference;
- (_Bool)hasBookingReference;
- (JCSAssignedId *)getAssignedId;
- (_Bool)hasAssignedId;
@end
