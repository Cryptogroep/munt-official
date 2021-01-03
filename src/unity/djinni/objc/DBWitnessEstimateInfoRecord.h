// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import <Foundation/Foundation.h>

@interface DBWitnessEstimateInfoRecord : NSObject
- (nonnull instancetype)initWithNetworkWeight:(int64_t)networkWeight
                                       weight:(int64_t)weight
                                        parts:(int64_t)parts
                  estimatedWitnessProbability:(double)estimatedWitnessProbability
                        estimatedBlocksPerDay:(double)estimatedBlocksPerDay
                       estimatedDailyEarnings:(int64_t)estimatedDailyEarnings
                    estimatedLifetimeEarnings:(int64_t)estimatedLifetimeEarnings;
+ (nonnull instancetype)witnessEstimateInfoRecordWithNetworkWeight:(int64_t)networkWeight
                                                            weight:(int64_t)weight
                                                             parts:(int64_t)parts
                                       estimatedWitnessProbability:(double)estimatedWitnessProbability
                                             estimatedBlocksPerDay:(double)estimatedBlocksPerDay
                                            estimatedDailyEarnings:(int64_t)estimatedDailyEarnings
                                         estimatedLifetimeEarnings:(int64_t)estimatedLifetimeEarnings;

/** Current network weight */
@property (nonatomic, readonly) int64_t networkWeight;

/** Weight of resulting witness account */
@property (nonatomic, readonly) int64_t weight;

/** How many parts this weight will be split into */
@property (nonatomic, readonly) int64_t parts;

/** The per block probability of resulting account witnesing */
@property (nonatomic, readonly) double estimatedWitnessProbability;

/** The estimated number of blocks the resulting account should find per day */
@property (nonatomic, readonly) double estimatedBlocksPerDay;

/** The estimated earnings the account should make per day */
@property (nonatomic, readonly) int64_t estimatedDailyEarnings;

/** The estimated earnings the account should make over its entire lifetime */
@property (nonatomic, readonly) int64_t estimatedLifetimeEarnings;

@end