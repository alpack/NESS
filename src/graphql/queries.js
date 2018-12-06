// eslint-disable
// this is an auto generated file. This will be overwritten

<<<<<<< HEAD
export const getHero = `query GetHero($id: ID!) {
  getHero(id: $id) {
=======
export const getUser = `query GetUser($id: ID!) {
  getUser(id: $id) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    id
    owner
<<<<<<< HEAD
    registered
    createdAt
    updatedAt
    image {
      bucket
      region
      key
    }
    isOnline
    level
    exp
    title
    race {
      RaceEnum
      description
    }
    lore
    skills {
      items {
        id
        name
        rank
        description
      }
      nextToken
    }
    squads {
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
export const listHeros = `query ListHeros(
  $filter: ModelHeroFilterInput
  $limit: Int
  $nextToken: String
) {
  listHeros(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      image {
        bucket
        region
        key
      }
      isOnline
      level
      exp
      title
      race {
        RaceEnum
        description
      }
      lore
      skills {
        items {
          id
          name
          rank
          description
        }
        nextToken
      }
      squads {
        id
        owner
        name
        createdAt
        updatedAt
        isRecruiting
      }
    }
    nextToken
  }
}
`;
export const getSquad = `query GetSquad($id: ID!) {
  getSquad(id: $id) {
    id
    owner
    name
    createdAt
    updatedAt
    isRecruiting
=======
    name
    createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    heroes {
      items {
        id
        name
<<<<<<< HEAD
        owner
        registered
        createdAt
        updatedAt
        isOnline
=======
        createdAt
        isOnline
        honor
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
        level
        exp
        title
        lore
      }
      nextToken
    }
    quest {
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      reward
      contact
    }
  }
}
`;
<<<<<<< HEAD
export const listSquads = `query ListSquads(
  $filter: ModelSquadFilterInput
  $limit: Int
  $nextToken: String
) {
  listSquads(filter: $filter, limit: $limit, nextToken: $nextToken) {
=======
export const listUsers = `query ListUsers(
  $filter: ModelUserFilterInput
  $limit: Int
  $nextToken: String
) {
  listUsers(filter: $filter, limit: $limit, nextToken: $nextToken) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    items {
      id
      owner
      name
      createdAt
<<<<<<< HEAD
      updatedAt
      isRecruiting
=======
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      heroes {
        items {
          id
          name
<<<<<<< HEAD
          owner
          registered
          createdAt
          updatedAt
          isOnline
=======
          createdAt
          isOnline
          honor
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
          level
          exp
          title
          lore
        }
        nextToken
      }
      quest {
        id
        name
        owner
        region
        createdAt
        updatedAt
        isTaken
        lore
        reward
        contact
      }
    }
    nextToken
  }
}
`;
export const getQuest = `query GetQuest($id: ID!) {
  getQuest(id: $id) {
    id
<<<<<<< HEAD
    name
    owner
    region
    createdAt
    updatedAt
    isTaken
    lore
    requirements {
      id
      name
      rank
      description
    }
    reward
    contact
    file {
=======
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      bucket
      region
      key
    }
<<<<<<< HEAD
    squad {
=======
    isOnline
    honor
    level
    exp
    title
    race {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      id
      owner
      name
      createdAt
      updatedAt
      isRecruiting
    }
  }
}
`;
export const listQuests = `query ListQuests(
  $filter: ModelQuestFilterInput
  $limit: Int
  $nextToken: String
) {
  listQuests(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      name
<<<<<<< HEAD
      owner
      region
      createdAt
      updatedAt
      isTaken
      lore
      requirements {
        id
        name
        rank
        description
      }
      reward
      contact
      file {
        bucket
        region
        key
      }
      squad {
        id
        owner
        name
        createdAt
        updatedAt
        isRecruiting
      }
=======
      rank
      description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
    nextToken
  }
}
`;
export const getSkill = `query GetSkill($id: ID!) {
  getSkill(id: $id) {
    id
    name
    rank
    description
    hero {
      id
      name
      owner
      registered
      createdAt
      updatedAt
      isOnline
      level
      exp
      title
      lore
    }
  }
}
`;
export const listSkills = `query ListSkills(
  $filter: ModelSkillFilterInput
  $limit: Int
  $nextToken: String
) {
  listSkills(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
<<<<<<< HEAD
      name
      rank
      description
      hero {
=======
      user {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
        id
        owner
<<<<<<< HEAD
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
=======
        name
        createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
    }
    nextToken
  }
}
`;
export const searchHeros = `query SearchHeros(
  $filter: SearchableHeroFilterInput
  $sort: SearchableHeroSortInput
  $limit: Int
  $nextToken: Int
) {
  searchHeros(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      name
<<<<<<< HEAD
      owner
      registered
      createdAt
      updatedAt
=======
      createdAt
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      image {
        bucket
        region
        key
      }
      isOnline
<<<<<<< HEAD
=======
      honor
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      level
      exp
      title
      race {
        RaceEnum
        description
      }
      lore
      skills {
        items {
          id
          name
          rank
          description
        }
        nextToken
      }
      squads {
        id
<<<<<<< HEAD
        owner
        name
        createdAt
        updatedAt
        isRecruiting
=======
        name
        rank
        description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
    }
    nextToken
  }
}
`;
<<<<<<< HEAD
export const searchSquads = `query SearchSquads(
  $filter: SearchableSquadFilterInput
  $sort: SearchableSquadSortInput
  $limit: Int
  $nextToken: Int
) {
  searchSquads(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
=======
export const getSquad = `query GetSquad($id: ID!) {
  getSquad(id: $id) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const listSquads = `query ListSquads(
  $filter: ModelSquadFilterInput
  $limit: Int
  $nextToken: String
) {
  listSquads(filter: $filter, limit: $limit, nextToken: $nextToken) {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    items {
      id
      owner
      name
      createdAt
<<<<<<< HEAD
      updatedAt
      isRecruiting
      heroes {
        items {
          id
          name
          owner
          registered
          createdAt
          updatedAt
          isOnline
          level
          exp
          title
          lore
        }
        nextToken
      }
      quest {
        id
        name
        owner
        region
        createdAt
        updatedAt
        isTaken
        lore
        reward
        contact
      }
=======
      open
      quests {
        items {
          id
          owner
          createdAt
          updatedAt
          isTaken
          status
          name
          lore
          honorReward
        }
        nextToken
      }
    }
    nextToken
  }
}
`;
export const getQuest = `query GetQuest($id: ID!) {
  getQuest(id: $id) {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    }
    nextToken
  }
}
`;
<<<<<<< HEAD
export const searchQuests = `query SearchQuests(
  $filter: SearchableQuestFilterInput
  $sort: SearchableQuestSortInput
=======
export const listQuests = `query ListQuests(
  $filter: ModelQuestFilterInput
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
  $limit: Int
  $nextToken: Int
) {
<<<<<<< HEAD
  searchQuests(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      name
      owner
      region
      createdAt
      updatedAt
      isTaken
=======
  listQuests(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      owner
      createdAt
      updatedAt
      isTaken
      status
      name
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      lore
      requirements {
        id
        name
        rank
        description
<<<<<<< HEAD
      }
      reward
      contact
      file {
=======
      }
      honorReward
      file {
        bucket
        region
        key
      }
      squad {
        id
        owner
        name
        createdAt
        open
      }
    }
    nextToken
  }
}
`;
export const searchHeros = `query SearchHeros(
  $filter: SearchableHeroFilterInput
  $sort: SearchableHeroSortInput
  $limit: Int
  $nextToken: Int
) {
  searchHeros(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      user {
        id
        owner
        name
        createdAt
      }
      name
      createdAt
      image {
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
        bucket
        region
        key
      }
<<<<<<< HEAD
      squad {
        id
        owner
        name
        createdAt
        updatedAt
        isRecruiting
=======
      isOnline
      honor
      level
      exp
      title
      race {
        id
        name
        description
      }
      lore
      skills {
        id
        name
        rank
        description
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
    }
    nextToken
  }
}
`;
<<<<<<< HEAD
export const searchSkills = `query SearchSkills(
  $filter: SearchableSkillFilterInput
  $sort: SearchableSkillSortInput
  $limit: Int
  $nextToken: Int
) {
  searchSkills(
=======
export const searchSquads = `query SearchSquads(
  $filter: SearchableSquadFilterInput
  $sort: SearchableSquadSortInput
  $limit: Int
  $nextToken: Int
) {
  searchSquads(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      owner
      name
      createdAt
      open
      quests {
        items {
          id
          owner
          createdAt
          updatedAt
          isTaken
          status
          name
          lore
          honorReward
        }
        nextToken
      }
    }
    nextToken
  }
}
`;
export const searchQuests = `query SearchQuests(
  $filter: SearchableQuestFilterInput
  $sort: SearchableQuestSortInput
  $limit: Int
  $nextToken: Int
) {
  searchQuests(
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      owner
      createdAt
      updatedAt
      isTaken
      status
      name
<<<<<<< HEAD
      rank
      description
      hero {
        id
        name
        owner
        registered
        createdAt
        updatedAt
        isOnline
        level
        exp
        title
        lore
=======
      lore
      requirements {
        id
        name
        rank
        description
      }
      honorReward
      file {
        bucket
        region
        key
      }
      squad {
        id
        owner
        name
        createdAt
        open
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
      }
    }
    nextToken
  }
}
`;
